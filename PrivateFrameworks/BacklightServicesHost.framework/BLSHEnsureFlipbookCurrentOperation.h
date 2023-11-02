
@interface BLSHEnsureFlipbookCurrentOperation : NSObject <BLSHPendingOperation> {
    bool  _completed;
    bool  _started;
}

@property (getter=isCompleted) bool completed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isStarted) bool started;
@property (readonly) Class superclass;
@property (readonly) long long type;

+ (id)operation;

- (id)description;
- (bool)isCompleted;
- (bool)isStarted;
- (void)setCompleted:(bool)arg1;
- (void)setStarted:(bool)arg1;
- (long long)type;

@end
