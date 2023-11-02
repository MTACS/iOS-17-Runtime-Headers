
@interface RTIInputSystemDataPayload : RTIDataPayload <NSCopying, NSSecureCoding> {
    bool  _disableUpdate;
    RTIDocumentState * _documentState;
    RTIDocumentTraits * _documentTraits;
    NSUUID * _sessionUUID;
    RTITextOperations * _textOperations;
}

@property (nonatomic, retain) RTIDocumentState *documentState;
@property (nonatomic, retain) RTIDocumentTraits *documentTraits;
@property (nonatomic, retain) NSUUID *sessionUUID;
@property (nonatomic, retain) RTITextOperations *textOperations;

+ (id)payloadWithData:(id)arg1;
+ (id)payloadWithData:(id)arg1 version:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_unarchiveData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)documentState;
- (id)documentTraits;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)sessionUUID;
- (void)setDocumentState:(id)arg1;
- (void)setDocumentTraits:(id)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setTextOperations:(id)arg1;
- (id)textOperations;
- (void)updateData;

@end
