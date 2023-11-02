
@interface ACActivityPresentationDestination : NSObject {
    long long  _destination;
}

@property (nonatomic, readonly) long long destination;

- (long long)destination;
- (id)initWithDestination:(long long)arg1;

@end
