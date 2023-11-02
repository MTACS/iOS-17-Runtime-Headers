
@interface SCMLImageLabelCoder : NSObject {
    NSDictionary * __decodeFromHexDict;
    NSDictionary * __decodeFromP1Dict;
    NSDictionary * __encodeToHexDict;
    NSDictionary * __encodeToP1Dict;
}

@property (nonatomic, retain) NSDictionary *_decodeFromHexDict;
@property (nonatomic, retain) NSDictionary *_decodeFromP1Dict;
@property (nonatomic, retain) NSDictionary *_encodeToHexDict;
@property (nonatomic, retain) NSDictionary *_encodeToP1Dict;

+ (id)_createHexDecodingDict;
+ (id)_createHexEncodingDict;
+ (id)_createP1DecodingDict;
+ (id)_createP1EncodingDict;
+ (id)_nameFromRevParts:(id)arg1;
+ (id)instance;

- (void).cxx_destruct;
- (id)_decodeFromHexDict;
- (id)_decodeFromP1Dict;
- (id)_encodeToHexDict;
- (id)_encodeToP1Dict;
- (id)decodeFromHex:(id)arg1;
- (id)decodeFromP1:(id)arg1;
- (id)encodeToHex:(id)arg1;
- (id)encodeToP1:(id)arg1;
- (id)init;
- (void)set_decodeFromHexDict:(id)arg1;
- (void)set_decodeFromP1Dict:(id)arg1;
- (void)set_encodeToHexDict:(id)arg1;
- (void)set_encodeToP1Dict:(id)arg1;

@end
