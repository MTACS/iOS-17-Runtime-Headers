
@interface PXGFocusGuideViewConfiguration : NSObject <PXGViewUserData> {
    NSArray * _preferredFocusEnvironments;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *preferredFocusEnvironments;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)setPreferredFocusEnvironments:(id)arg1;

@end
