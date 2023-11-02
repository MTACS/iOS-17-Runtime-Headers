
@interface HMIPersonsModelSummary : HMFObject {
    bool  _externalLibrary;
    NSDictionary * _faceCountsByPerson;
    NSUUID * _sourceUUID;
}

@property (getter=isExternalLibrary, readonly) bool externalLibrary;
@property (readonly) NSDictionary *faceCountsByPerson;
@property (readonly) NSUUID *sourceUUID;

- (void).cxx_destruct;
- (id)faceCountsByPerson;
- (id)initWithSourceUUID:(id)arg1 externalLibrary:(bool)arg2 faceCountsByPerson:(id)arg3;
- (bool)isExternalLibrary;
- (id)sourceUUID;

@end
