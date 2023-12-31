
@interface SDPParser : NSObject {
    NSString * _fieldName;
    NSDictionary * _fieldNameMap;
    unsigned char  _fieldType;
    NSString * _fieldValue;
    NSEnumerator * _lineEnumerator;
    NSArray * _lines;
    bool  _parsingDone;
}

@property (nonatomic, readonly) NSString *fieldName;
@property (nonatomic, readonly) unsigned char fieldType;
@property (nonatomic, readonly) NSString *fieldValue;
@property (nonatomic, readonly) bool parsingDone;

- (void)dealloc;
- (id)fieldName;
- (unsigned char)fieldType;
- (id)fieldValue;
- (id)initWithString:(id)arg1;
- (bool)nextLine;
- (bool)parseMediaLineHeader:(id)arg1 mediaType:(int*)arg2 supportedPayloads:(id)arg3 rtpPort:(int*)arg4;
- (bool)parsingDone;
- (int)stringToMediaType:(id)arg1;

@end
