
@interface SFMailResultDetails : NSObject <NSCopying, NSSecureCoding, SFMailResultDetails> {
    int  _dataSources;
    struct { 
        unsigned int dataSources : 1; 
    }  _has;
    NSNumber * _skgMegadomeSpotlightIndexEntries;
    NSNumber * _suggestionScore;
}

@property (nonatomic) int dataSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSNumber *skgMegadomeSpotlightIndexEntries;
@property (nonatomic, copy) NSNumber *suggestionScore;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dataSources;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDataSources;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setDataSources:(int)arg1;
- (void)setSkgMegadomeSpotlightIndexEntries:(id)arg1;
- (void)setSuggestionScore:(id)arg1;
- (id)skgMegadomeSpotlightIndexEntries;
- (id)suggestionScore;

@end
