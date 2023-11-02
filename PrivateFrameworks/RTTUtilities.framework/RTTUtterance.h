
@interface RTTUtterance : NSObject <NSCopying, NSSecureCoding> {
    NSString * _contactPath;
    bool  _ignoreTimeoutTemporarily;
    bool  _isMe;
    bool  _isTranscription;
    NSDate * _lastChangeDate;
    NSString * _text;
}

@property (nonatomic, retain) NSString *contactPath;
@property (nonatomic) bool ignoreTimeoutTemporarily;
@property (nonatomic) bool isMe;
@property (nonatomic) bool isTranscription;
@property (nonatomic, retain) NSDate *lastChangeDate;
@property (nonatomic, copy) NSString *text;

+ (bool)contactPathIsMe:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)utteranceWithContactPath:(id)arg1 andText:(id)arg2;
+ (id)utteranceWithContactPath:(id)arg1 andText:(id)arg2 isTranscription:(bool)arg3;

- (void).cxx_destruct;
- (id)contactPath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasTimedOut;
- (bool)ignoreTimeoutTemporarily;
- (id)initWithCoder:(id)arg1;
- (bool)isComplete;
- (bool)isEqual:(id)arg1;
- (bool)isMe;
- (bool)isTranscription;
- (id)lastChangeDate;
- (void)resetTimeout;
- (void)setContactPath:(id)arg1;
- (void)setIgnoreTimeoutTemporarily:(bool)arg1;
- (void)setIsMe:(bool)arg1;
- (void)setIsTranscription:(bool)arg1;
- (void)setLastChangeDate:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)updateText:(id)arg1;

@end
