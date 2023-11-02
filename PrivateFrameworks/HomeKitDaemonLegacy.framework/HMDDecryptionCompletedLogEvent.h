
@interface HMDDecryptionCompletedLogEvent : HMMLogEvent {
    bool  _didDecryptionFail;
}

@property (readonly) bool didDecryptionFail;

+ (id)decryptionCompletedWithFailure:(bool)arg1;

- (bool)didDecryptionFail;
- (id)initWithFailure:(bool)arg1;

@end
