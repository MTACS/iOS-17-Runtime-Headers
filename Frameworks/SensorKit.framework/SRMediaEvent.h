
@interface SRMediaEvent : NSObject <NSCopying, NSSecureCoding, SRSampleExporting, SRSampling> {
    long long  _eventType;
    NSString * _mediaIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *mediaIdentifier;
@property (readonly) Class superclass;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)binarySampleRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)eventType;
- (unsigned long long)hash;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaIdentifier:(id)arg1 eventType:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)mediaIdentifier;
- (void)setEventType:(long long)arg1;
- (void)setMediaIdentifier:(id)arg1;
- (id)sr_dictionaryRepresentation;

@end
