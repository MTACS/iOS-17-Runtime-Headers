
@interface COIDSMessage : NSObject {
    NSString * _command;
    NSError * _error;
    NSDictionary * _metadata;
    NSData * _payload;
    unsigned long long  _type;
    unsigned long long  _version;
}

@property (nonatomic, readonly) NSString *command;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, readonly) NSData *payload;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned long long version;

- (void).cxx_destruct;
- (void)_commandPayload:(id)arg1;
- (bool)checkValue:(id)arg1 forKey:(id)arg2 isKindOfClass:(Class)arg3 error:(out id*)arg4;
- (id)command;
- (id)dictionaryRepresentation;
- (id)error;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithError:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (id)initWithResponse:(id)arg1;
- (id)metadata;
- (id)payload;
- (void)setMetadata:(id)arg1;
- (unsigned long long)type;
- (id)unarchivePayloadOfTypes:(id)arg1 error:(id*)arg2;
- (bool)validateCommand:(inout id*)arg1 error:(out id*)arg2;
- (bool)validateData:(inout id*)arg1 error:(out id*)arg2;
- (bool)validateError:(inout id*)arg1 error:(out id*)arg2;
- (bool)validateMetadata:(inout id*)arg1 error:(out id*)arg2;
- (bool)validateType:(inout id*)arg1 error:(out id*)arg2;
- (bool)validateVersion:(inout id*)arg1 error:(out id*)arg2;
- (unsigned long long)version;

@end
