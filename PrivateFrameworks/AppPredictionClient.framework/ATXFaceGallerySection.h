
@interface ATXFaceGallerySection : NSObject <ATXProtoBufWrapper, BMStoreData, NSSecureCoding> {
    NSArray * _items;
    NSString * _localizedDescriptiveText;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
    long long  _semanticType;
    NSString * _symbolColorName;
    NSString * _symbolImageName;
    long long  _type;
    NSString * _unityDescription;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSDictionary *jsonDictionary;
@property (nonatomic, copy) NSString *localizedDescriptiveText;
@property (nonatomic, copy) NSString *localizedSubtitle;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, readonly) long long semanticType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *symbolColorName;
@property (nonatomic, copy) NSString *symbolImageName;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *unityDescription;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)sectionFromJSONDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedTitle:(id)arg1 symbolImageName:(id)arg2 symbolColorName:(id)arg3 localizedSubtitle:(id)arg4 localizedDescriptiveText:(id)arg5 unityDescription:(id)arg6 type:(long long)arg7 items:(id)arg8 semanticType:(long long)arg9;
- (id)initWithLocalizedTitle:(id)arg1 unityDescription:(id)arg2 type:(long long)arg3 items:(id)arg4;
- (id)initWithLocalizedTitle:(id)arg1 unityDescription:(id)arg2 type:(long long)arg3 items:(id)arg4 semanticType:(long long)arg5;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)json;
- (id)jsonDictionary;
- (id)localizedDescriptiveText;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (id)proto;
- (long long)semanticType;
- (id)serialize;
- (void)setItems:(id)arg1;
- (void)setLocalizedDescriptiveText:(id)arg1;
- (void)setLocalizedSubtitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setSymbolColorName:(id)arg1;
- (void)setSymbolImageName:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUnityDescription:(id)arg1;
- (id)symbolColorName;
- (id)symbolImageName;
- (long long)type;
- (id)unityDescription;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

- (id)initWithPosterBoardRepresentation:(id)arg1;
- (id)posterBoardRepresentation;

@end
