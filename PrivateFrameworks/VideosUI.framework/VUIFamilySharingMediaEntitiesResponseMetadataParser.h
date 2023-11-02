
@interface VUIFamilySharingMediaEntitiesResponseMetadataParser : NSObject {
    AMSURLResult * _result;
}

@property (nonatomic, retain) AMSURLResult *result;

- (void).cxx_destruct;
- (id)_parseOffsetFromMetaBag;
- (id)_parseTotalFromMetaBag;
- (id)init;
- (id)parseAMSURLResult:(id)arg1;
- (id)result;
- (void)setResult:(id)arg1;

@end
