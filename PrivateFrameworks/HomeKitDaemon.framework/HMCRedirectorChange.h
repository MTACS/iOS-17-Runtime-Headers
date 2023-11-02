
@interface HMCRedirectorChange : HMFObject {
    NSString * _author;
    NSString * _context;
    NSSet * _deletes;
    NSSet * _inserts;
    NSSet * _updates;
}

@property (readonly) NSString *author;
@property (readonly) NSString *context;
@property (readonly) NSSet *deletes;
@property (readonly) NSSet *inserts;
@property (readonly) NSSet *updates;

- (void).cxx_destruct;
- (id)author;
- (id)context;
- (id)deletes;
- (id)description;
- (id)descriptionLines;
- (void)dumpForLoggingWithPrefix:(id)arg1 logType:(unsigned char)arg2;
- (id)inserts;
- (id)updates;

@end
