
@interface CRKAnnotatedCredentialManifest : NSObject <NSSecureCoding> {
    NSMutableDictionary * _annotationsByPersistentID;
    bool  _modified;
}

@property (nonatomic, readonly) NSMutableDictionary *annotationsByPersistentID;
@property (nonatomic, readonly, copy) NSDictionary *debugInfo;
@property (nonatomic) bool modified;
@property (nonatomic, readonly, copy) NSSet *persistentIDs;

+ (id)manifestWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addPersistentID:(id)arg1 withAnnotation:(id)arg2;
- (id)annotationForPersistentID:(id)arg1;
- (id)annotationsByPersistentID;
- (id)dataRepresentation;
- (id)debugInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (bool)modified;
- (id)persistentIDs;
- (void)removePersistentID:(id)arg1;
- (void)setModified:(bool)arg1;

@end
