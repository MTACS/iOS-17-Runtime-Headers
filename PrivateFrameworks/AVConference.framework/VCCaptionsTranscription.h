
@interface VCCaptionsTranscription : NSObject <NSCoding, NSCopying, NSSecureCoding, VCCaptionsTranscription> {
    NSMutableString * _formattedText;
    bool  _isFinal;
    bool  _isLocal;
    NSMutableArray * _segments;
    long long  _streamToken;
    unsigned int  _updateNumber;
    unsigned int  _utteranceNumber;
}

@property (nonatomic, readonly) NSString *formattedText;
@property (nonatomic) bool isFinal;
@property (nonatomic) bool isLocal;
@property (nonatomic, readonly) NSArray *segments;
@property (nonatomic, readonly) long long streamToken;
@property (nonatomic) unsigned int updateNumber;
@property (nonatomic) unsigned int utteranceNumber;

+ (bool)supportsSecureCoding;

- (void)addSegment:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedText;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSFTranscription:(id)arg1 utteranceNumber:(unsigned int)arg2 updateNumber:(unsigned int)arg3 isLocal:(bool)arg4 isFinal:(bool)arg5 streamToken:(long long)arg6;
- (id)initWithUtteranceNumber:(unsigned int)arg1 updateNumber:(unsigned int)arg2 isLocal:(bool)arg3 isFinal:(bool)arg4 streamToken:(long long)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isFinal;
- (bool)isLocal;
- (id)segments;
- (void)setIsFinal:(bool)arg1;
- (void)setIsLocal:(bool)arg1;
- (void)setUpdateNumber:(unsigned int)arg1;
- (void)setUtteranceNumber:(unsigned int)arg1;
- (long long)streamToken;
- (unsigned int)updateNumber;
- (unsigned int)utteranceNumber;

@end
