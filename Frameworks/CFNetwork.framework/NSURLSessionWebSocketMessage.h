
@interface NSURLSessionWebSocketMessage : NSObject {
    NSObject * content;
}

@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *string;
@property (readonly) long long type;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (unsigned long long)hash;
- (id)initWithData:(id)arg1;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)string;
- (long long)type;

@end
