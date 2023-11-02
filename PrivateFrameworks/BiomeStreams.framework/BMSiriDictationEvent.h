
@interface BMSiriDictationEvent : NSObject <BMProtoBufWrapper, BMStoreData> {
    double  _absoluteTimestamp;
    NSString * _correctedText;
    NSString * _recognizedText;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly, copy) NSString *correctedText;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *recognizedText;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)correctedText;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (id)initWithAbsoluteTimestamp:(double)arg1;
- (id)initWithAbsoluteTimestamp:(double)arg1 recognizedText:(id)arg2 correctedText:(id)arg3;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)proto;
- (id)recognizedText;
- (id)serialize;

@end
