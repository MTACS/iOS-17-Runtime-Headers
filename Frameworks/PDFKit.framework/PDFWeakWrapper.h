
@interface PDFWeakWrapper : NSObject {
    id  _object;
}

@property id object;

+ (id)weakWrapperWithObject:(id)arg1;

- (void).cxx_destruct;
- (id)object;
- (void)setObject:(id)arg1;

@end
