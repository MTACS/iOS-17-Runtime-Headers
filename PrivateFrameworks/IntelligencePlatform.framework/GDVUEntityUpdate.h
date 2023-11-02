
@interface GDVUEntityUpdate : GDVUUpdate {
    void inner;
}

@property (nonatomic, readonly) GDEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly) NSUUID *tag;
@property (nonatomic, readonly) long long updateType;

- (void).cxx_destruct;
- (id)entityIdentifier;
- (id)init;
- (id)tag;
- (long long)updateType;

@end
