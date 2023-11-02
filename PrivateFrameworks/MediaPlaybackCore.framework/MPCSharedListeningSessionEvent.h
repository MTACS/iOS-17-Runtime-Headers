
@interface MPCSharedListeningSessionEvent : NSObject {
    long long  _kind;
}

@property (nonatomic, readonly) long long kind;

- (id)description;
- (id)initWithKind:(long long)arg1;
- (long long)kind;

@end
