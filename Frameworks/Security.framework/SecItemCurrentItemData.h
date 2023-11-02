
@interface SecItemCurrentItemData : NSObject {
    NSDate * _currentItemPointerModificationTime;
    NSData * _persistentRef;
}

@property (retain) NSDate *currentItemPointerModificationTime;
@property (retain) NSData *persistentRef;

- (void).cxx_destruct;
- (id)currentItemPointerModificationTime;
- (id)initWithPersistentRef:(id)arg1;
- (id)persistentRef;
- (void)setCurrentItemPointerModificationTime:(id)arg1;
- (void)setPersistentRef:(id)arg1;

@end
