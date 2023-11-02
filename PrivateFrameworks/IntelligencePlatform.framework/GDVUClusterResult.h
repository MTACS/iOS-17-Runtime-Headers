
@interface GDVUClusterResult : NSObject {
    void entityIdentifier;
    void isKeyFace;
    void observationIdentifier;
}

@property (nonatomic, readonly) GDEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly) bool isKeyFace;
@property (nonatomic, readonly) long long observationIdentifier;

- (void).cxx_destruct;
- (id)entityIdentifier;
- (id)init;
- (bool)isKeyFace;
- (long long)observationIdentifier;

@end
