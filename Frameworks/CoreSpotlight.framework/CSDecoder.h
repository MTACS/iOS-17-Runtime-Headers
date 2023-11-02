
@interface CSDecoder : NSObject <CSCoderData> {
    id  _backingStore;
    struct __CFAllocator { } * _contentDeallocator;
    NSData * _data;
    struct { 
        char *containerBytes; 
        struct { 
            unsigned int embeddedReference; 
            unsigned char type; 
        } reference; 
    }  _obj;
}

@property (nonatomic, retain) id backingStore;
@property (nonatomic, readonly) struct __CFAllocator { }*contentDeallocator;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; } obj;

+ (id)decodeURLPreservingSecurityScope:(id)arg1;

- (void).cxx_destruct;
- (id)backingStore;
- (struct __CFAllocator { }*)contentDeallocator;
- (id)data;
- (void)dealloc;
- (id)debugDescription;
- (id)decode;
- (id)decodeObject:(struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; })arg1;
- (id)decodeObjectNoCopy:(struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; })arg1;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 obj:(struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; })arg2;
- (struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; })obj;
- (void)setBackingStore:(id)arg1;

@end
