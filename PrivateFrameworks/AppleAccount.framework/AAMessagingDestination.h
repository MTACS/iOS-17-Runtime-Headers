
@interface AAMessagingDestination : NSObject <NSCopying> {
    NSString * _destination;
    long long  _destinationType;
    NSString * _destinationURI;
    NSObject<OS_dispatch_queue> * _idsQueue;
}

@property (nonatomic, readonly) NSString *destination;
@property (nonatomic, readonly) long long destinationType;
@property (nonatomic, readonly) NSString *destinationURI;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destination;
- (long long)destinationType;
- (id)destinationURI;
- (id)initWithEmail:(id)arg1;
- (id)initWithHandle:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1;
- (void)isRegisteredToiMessageWithCompletion:(id /* block */)arg1;

@end
