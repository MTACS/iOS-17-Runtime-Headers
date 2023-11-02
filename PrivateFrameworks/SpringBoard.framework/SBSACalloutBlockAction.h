
@interface SBSACalloutBlockAction : NSObject <SBSAActionRepresenting> {
    id /* block */  _calloutBlock;
    NSArray * _reasons;
}

@property (nonatomic, readonly, copy) id /* block */ calloutBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *reasons;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)calloutBlock;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCalloutBlock:(id /* block */)arg1 reasons:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)reasons;

@end
