
@interface _NSKeyedUnarchiverHelper : NSObject {
    NSArray * _allowed;
    NSMutableArray * _allowedClasses;
    NSError * _decodeError;
    unsigned int  _lastRef;
    bool  decodedCollection;
    bool  expectsUnnestedCollection;
}

@property (copy) NSError *decodeError;

- (id)allowedClassNames;
- (bool)classNameAllowed:(Class)arg1;
- (void)dealloc;
- (id)decodeError;
- (id)init;
- (void)setAllowedClassNames:(id)arg1;
- (void)setDecodeError:(id)arg1;

@end
