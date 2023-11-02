
@interface ObjCVersion : NSObject {
    void version;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool hasTemporaryComponents;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) long long maxCounter;
@property (nonatomic, readonly) NSArray *sortedUUIDs;

- (void).cxx_destruct;
- (void)apply:(id)arg1;
- (long long)compareTo:(id)arg1;
- (bool)contains:(id)arg1;
- (id)copy;
- (id)description;
- (bool)hasDeltaTo:(id)arg1;
- (bool)hasTemporaryComponents;
- (id)init;
- (void)insertWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replica:(id)arg2;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (long long)maxCounter;
- (void)merge:(id)arg1;
- (id)sortedUUIDs;
- (void)subtract:(id)arg1;
- (void)subtractWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replica:(id)arg2;
- (id)temporaryComponentsWithExcluding:(id)arg1;

@end
