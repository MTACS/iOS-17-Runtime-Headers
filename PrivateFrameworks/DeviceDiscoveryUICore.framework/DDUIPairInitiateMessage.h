
@interface DDUIPairInitiateMessage : NSObject {
    DDUIApplicationInfo * _applicationInfo;
}

@property (nonatomic, readonly) DDUIApplicationInfo *applicationInfo;

- (void).cxx_destruct;
- (id)applicationInfo;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithApplicationInfo:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end
