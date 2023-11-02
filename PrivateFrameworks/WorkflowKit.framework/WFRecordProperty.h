
@interface WFRecordProperty : NSObject {
    bool  _dynamic;
    NSString * _getter;
    NSString * _name;
    bool  _nonAtomic;
    bool  _readOnly;
    NSString * _setter;
}

@property (getter=isDynamic, nonatomic, readonly) bool dynamic;
@property (nonatomic, readonly) NSString *getter;
@property (nonatomic, readonly) NSString *name;
@property (getter=isNonAtomic, nonatomic, readonly) bool nonAtomic;
@property (getter=isReadOnly, nonatomic, readonly) bool readOnly;
@property (nonatomic, readonly) NSString *setter;

- (void).cxx_destruct;
- (id)getter;
- (id)initWithName:(id)arg1 property:(struct objc_property { }*)arg2;
- (bool)isDynamic;
- (bool)isNonAtomic;
- (bool)isReadOnly;
- (id)name;
- (id)setter;

@end
