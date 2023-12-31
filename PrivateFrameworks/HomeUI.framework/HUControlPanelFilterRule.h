
@interface HUControlPanelFilterRule : NSObject <HUControlPanelRule> {
    id /* block */  _filter;
    double  _priority;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ filter;
@property (readonly) unsigned long long hash;
@property (nonatomic) double priority;
@property (readonly) Class superclass;

+ (id)ruleWithFilter:(id /* block */)arg1;

- (void).cxx_destruct;
- (id /* block */)filter;
- (id)initWithFilter:(id /* block */)arg1;
- (double)priority;
- (bool)ruleMatchesItem:(id)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setPriority:(double)arg1;

@end
