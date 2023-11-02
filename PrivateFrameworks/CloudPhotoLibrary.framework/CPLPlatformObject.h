
@interface CPLPlatformObject : NSObject {
    <CPLAbstractObject> * _abstractObject;
}

@property (nonatomic, readonly) <CPLAbstractObject> *abstractObject;

- (void).cxx_destruct;
- (id)abstractObject;
- (id)description;
- (id)init;
- (id)initWithAbstractObject:(id)arg1;

@end
