
@protocol GEOProtobufSessionTaskDelegate <NSObject>

@required

- (void)protobufSession:(GEOProtobufSession *)arg1 didCompleteTask:(GEOProtobufSessionTask *)arg2;

@optional

- (NSError *)protobufSession:(GEOProtobufSession *)arg1 validateResponse:(PBCodable *)arg2;
- (void)protobufSession:(void *)arg1 willSendRequest:(void *)arg2 forTask:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: GEOProtobufSession *, GEODataRequest *, GEOProtobufSessionTask *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEODataRequest *, void*

@end
