
@interface VUIMediaTagsViewHelper : NSObject {
    NSDateComponentsFormatter * _dateComponentFormatter;
    NSMutableDictionary * _tagsViewDictionary;
    NSNumberFormatter * _tomatoPercentFormatter;
}

+ (bool)contentMetadataContainsMediaTags:(id)arg1;

- (void).cxx_destruct;
- (id)_commonSenseString:(id)arg1;
- (id)_durationDescriptionFromDuration:(id)arg1;
- (bool)_isValidNumber:(id)arg1;
- (void)_mediaBagdesWithVUIMediaEntity:(id)arg1;
- (id)_releaseDateDescriptionFromDate:(id)arg1;
- (void)addSeperatorKey:(id)arg1;
- (id)initWithContentMetadata:(id)arg1 additionalMetadata:(id)arg2;
- (id)initWithVUIMediaEntity:(id)arg1;
- (id)initWithVUIMediaItem:(id)arg1;
- (id)tagsViewDictionary;

@end
