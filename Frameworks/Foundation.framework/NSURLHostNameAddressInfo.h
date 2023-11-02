
@interface NSURLHostNameAddressInfo : NSObject {
    struct addrinfo { int x1; int x2; int x3; int x4; unsigned int x5; char *x6; struct sockaddr {} *x7; struct addrinfo {} *x8; } * addressInfo;
    double  timestamp;
}

+ (id)addressInfoForHost:(id)arg1;
+ (void)asyncResolveWithCallbackClient:(id)arg1;

- (id)_initWithAddressInfo:(struct addrinfo { int x1; int x2; int x3; int x4; unsigned int x5; char *x6; struct sockaddr {} *x7; struct addrinfo {} *x8; }*)arg1;
- (double)_timestamp;
- (struct addrinfo { int x1; int x2; int x3; int x4; unsigned int x5; char *x6; struct sockaddr {} *x7; struct addrinfo {} *x8; }*)addrinfo;
- (void)dealloc;

@end
