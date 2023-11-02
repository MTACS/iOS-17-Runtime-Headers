
@interface CSUKnowledgeEntity : NSObject {
    NSString * _QID;
    NSString * _humanReadableLabel;
    NSSet * _humanReadableSynonyms;
    int  _version;
}

@property (nonatomic, readonly) NSString *QID;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) NSString *humanReadableLabel;
@property (nonatomic, readonly) NSSet *humanReadableSynonyms;
@property (nonatomic, readonly) int version;

- (void).cxx_destruct;
- (id)QID;
- (id)dictionary;
- (id)humanReadableLabel;
- (id)humanReadableSynonyms;
- (id)initWithDictionary:(id)arg1;
- (id)initWithQID:(id)arg1 withHumanReadableLabel:(id)arg2 withHumanReadableSynonyms:(id)arg3 withVersion:(int)arg4;
- (int)version;

@end
