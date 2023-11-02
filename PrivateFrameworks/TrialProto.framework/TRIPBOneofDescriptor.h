
@interface TRIPBOneofDescriptor : NSObject {
    SEL  caseSel_;
    NSArray * fields_;
    const char * name_;
}

@property (nonatomic, readonly) NSArray *fields;
@property (nonatomic, readonly) NSString *name;

- (void)dealloc;
- (id)fieldWithName:(id)arg1;
- (id)fieldWithNumber:(unsigned int)arg1;
- (id)fields;
- (id)initWithName:(const char *)arg1 fields:(id)arg2;
- (id)name;

@end
