
@interface CADEntityWrapper : NSObject <NSSecureCoding> {
    int  _databaseID;
    int  _entityType;
    NSArray * _loadedValues;
    CADObjectID * _objectID;
    int  _rowID;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCalEntity:(void*)arg1;
- (id)initWithCalEntity:(void*)arg1 loadedValues:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)loadedValues;
- (id)objectID;

@end
