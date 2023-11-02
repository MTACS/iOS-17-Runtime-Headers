
@interface MailUI.MessageListSectionDataSourceChange : NSObject <EFPubliclyDescribable> {
    void change;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *ef_publicDescription;
@property (nonatomic, readonly) bool failed;
@property (nonatomic, readonly) bool isCleanSnapshot;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) bool isFirstChange;
@property (nonatomic, readonly) bool isSkipped;
@property (nonatomic, readonly) bool isStale;
@property (nonatomic, readonly) bool isValid;

+ (id)cleanSnapshot;
+ (id)skipped;
+ (id)stale;
+ (id)withCount:(long long)arg1;
+ (id)withCount:(long long)arg1 isFirstChange:(bool)arg2;
+ (id)withInitialCount:(long long)arg1 validCount:(long long)arg2;
+ (id)withInitialCount:(long long)arg1 validCount:(long long)arg2 isFirstChange:(bool)arg3;

- (long long)count;
- (id)debugDescription;
- (id)description;
- (id)ef_publicDescription;
- (bool)failed;
- (id)init;
- (bool)isCleanSnapshot;
- (bool)isEmpty;
- (bool)isFirstChange;
- (bool)isSkipped;
- (bool)isStale;
- (bool)isValid;

@end
