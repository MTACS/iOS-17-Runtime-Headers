
@interface CNMeCardSharingDataSource : NSObject {
    unsigned long long  _meCardSharingStatus;
}

@property (nonatomic) unsigned long long meCardSharingStatus;

+ (id)localizedStringForMeCardSharingStatus:(unsigned long long)arg1;

- (id)init;
- (id)localizedStringForMeCardSharingStatus;
- (unsigned long long)meCardSharingStatus;
- (void)setMeCardSharingStatus:(unsigned long long)arg1;

@end
