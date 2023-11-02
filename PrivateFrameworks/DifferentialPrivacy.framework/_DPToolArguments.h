
@interface _DPToolArguments : NSObject {
    NSString * _arguments;
    NSString * _command;
    NSString * _databasePath;
    bool  _enforceMetadata;
    NSString * _metadata;
    NSString * _recordKey;
    bool  _verbose;
    bool  _writeOK;
}

@property (nonatomic, readonly, copy) NSString *arguments;
@property (nonatomic, readonly, copy) NSString *command;
@property (nonatomic, readonly, copy) NSString *databasePath;
@property (nonatomic, readonly) bool enforceMetadata;
@property (nonatomic, readonly, copy) NSString *metadata;
@property (nonatomic, readonly, copy) NSString *recordKey;
@property (nonatomic, readonly) bool verbose;
@property (nonatomic, readonly) bool writeOK;

+ (id)usage;

- (void).cxx_destruct;
- (id)arguments;
- (id)command;
- (id)databasePath;
- (id)description;
- (bool)enforceMetadata;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)job;
- (id)metadata;
- (id)recordKey;
- (bool)verbose;
- (bool)writeOK;

@end
