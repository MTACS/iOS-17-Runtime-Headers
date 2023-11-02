
@interface CKInboxCellData : NSObject {
    void filterMode;
    void image;
    void title;
}

@property (nonatomic, readonly) unsigned long long filterMode;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSString *title;

+ (id)allMessagesCellData;
+ (id)blackholeJunkCellData;
+ (id)junkCellData;
+ (id)knownSendersCellData;
+ (id)oscarCellData;
+ (id)promotionalCellData;
+ (id)recentlyDeletedCellData;
+ (id)transactionalCellData;
+ (id)unknownSendersCellData;
+ (id)unreadMessagesCellData;

- (void).cxx_destruct;
- (unsigned long long)filterMode;
- (id)image;
- (id)init;
- (id)initWithImage:(id)arg1 title:(id)arg2 filterMode:(unsigned long long)arg3;
- (id)title;

@end
