
@interface SXActionActivityGroup : NSObject <SXActionActivityGroup> {
    NSMutableArray * _activities;
    UIView * _sourceView;
    NSString * _title;
}

@property (nonatomic, retain) NSMutableArray *activities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *sourceView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)activities;
- (void)addActivity:(id)arg1;
- (id)init;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 sourceView:(id)arg2;
- (void)setActivities:(id)arg1;
- (id)sourceView;
- (id)title;

@end
