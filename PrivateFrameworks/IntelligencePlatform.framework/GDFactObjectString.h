
@interface GDFactObjectString : NSObject <GDFactObject> {
    NSString * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *value;

- (void).cxx_destruct;
- (id)initWithValue:(id)arg1;
- (id)value;

@end
