
@interface GEORelatedPlaceList : NSObject {
    GEOFollowUpRequestMetadata * _followUpRequestMetadata;
    bool  _hasInitialData;
    unsigned long long  _numberOfInlineItems;
    NSArray * _placeTemplates;
    int  _type;
}

@property (nonatomic, readonly) GEOFollowUpRequestMetadata *followUpRequestMetadata;
@property (nonatomic, readonly) bool hasInitialData;
@property (nonatomic, readonly) NSArray *mapIdentifiers;
@property (nonatomic, readonly) unsigned long long numberOfInlineItems;
@property (nonatomic, readonly) NSArray *placeTemplates;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)followUpRequestMetadata;
- (bool)hasInitialData;
- (id)initWithRelatedPlace:(id)arg1;
- (id)initWithTemplatePlace:(id)arg1 attributedMap:(id)arg2;
- (id)initWithTemplates:(id)arg1 type:(int)arg2 hasInitialData:(bool)arg3 numberOfInlineItem:(unsigned long long)arg4 followUpRequestMetadata:(id)arg5;
- (id)mapIdentifiers;
- (unsigned long long)numberOfInlineItems;
- (id)placeTemplates;
- (int)type;

@end
