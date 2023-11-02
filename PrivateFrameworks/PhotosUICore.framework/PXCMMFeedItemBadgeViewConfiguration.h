
@interface PXCMMFeedItemBadgeViewConfiguration : NSObject <PXGViewUserData> {
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)_emptyConfiguration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithTitle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)title;

@end
