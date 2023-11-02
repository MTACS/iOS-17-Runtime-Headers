
@interface TTSGenericMarker : NSObject <TTSMarker> {
    long long  _byteOffset;
    NSString * _name;
}

@property (nonatomic, readonly) AVSpeechSynthesisMarker *avMark;
@property (nonatomic) long long byteOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long markType;
@property (nonatomic, retain) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)avMark;
- (long long)byteOffset;
- (long long)markType;
- (id)name;
- (void)setByteOffset:(long long)arg1;
- (void)setName:(id)arg1;

@end
