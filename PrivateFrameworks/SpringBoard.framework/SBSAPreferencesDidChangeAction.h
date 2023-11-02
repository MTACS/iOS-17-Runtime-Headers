
@interface SBSAPreferencesDidChangeAction : NSObject <SBSAActionRepresenting> {
    NSArray * _reasons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *reasons;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithReasons:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)reasons;

@end
