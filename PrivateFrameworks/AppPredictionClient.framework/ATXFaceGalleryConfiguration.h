
@interface ATXFaceGalleryConfiguration : NSObject <ATXProtoBufWrapper, BMStoreData, NSCopying, NSSecureCoding> {
    bool  _dayZero;
    NSLocale * _locale;
    NSArray * _sections;
    long long  _source;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (getter=isDayZero, nonatomic, readonly) bool dayZero;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *jsonDictionary;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, copy) NSArray *sections;
@property (nonatomic) long long source;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

+ (id)configurationFromJSONDictionary:(id)arg1;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configurationByApplyingConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithSections:(id)arg1;
- (id)initWithSections:(id)arg1 source:(long long)arg2 locale:(id)arg3;
- (id)initWithSections:(id)arg1 source:(long long)arg2 locale:(id)arg3 dayZero:(bool)arg4;
- (bool)isDayZero;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXFaceGalleryConfiguration:(id)arg1;
- (id)json;
- (id)jsonDictionary;
- (id)locale;
- (id)proto;
- (id)sections;
- (id)serialize;
- (void)setLocale:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSource:(long long)arg1;
- (long long)source;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

+ (id)pbf_loadLatestGalleryContainedWithinURL:(id)arg1 galleriesWhichNeedCleanup:(out id*)arg2 lastUpdateDate:(out id*)arg3 error:(id*)arg4;

- (id)initWithPosterBoardRepresentation:(id)arg1;
- (id)posterBoardRepresentation;

@end
