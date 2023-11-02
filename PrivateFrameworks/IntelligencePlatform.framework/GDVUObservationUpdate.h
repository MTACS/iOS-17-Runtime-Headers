
@interface GDVUObservationUpdate : GDVUUpdate {
    void inner;
}

@property (nonatomic, readonly) GDEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly) long long observationIdentifier;
@property (nonatomic, readonly) long long updateType;

- (id)entityIdentifier;
- (id)init;
- (long long)observationIdentifier;
- (long long)updateType;

@end
