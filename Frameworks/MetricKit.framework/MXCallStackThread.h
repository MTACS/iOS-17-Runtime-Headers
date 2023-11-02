
@interface MXCallStackThread : NSObject <NSSecureCoding> {
    bool  _attributedThread;
    NSArray * _topFrames;
}

@property (readonly) bool attributedThread;
@property (readonly) NSArray *topFrames;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)attributedThread;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopCallStackFrames:(id)arg1 isAttributedThread:(bool)arg2;
- (id)toDictionary;
- (id)topFrames;

@end
