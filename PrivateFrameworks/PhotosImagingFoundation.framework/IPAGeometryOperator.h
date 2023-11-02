
@interface IPAGeometryOperator : NSObject <IPAGeometryOperator> {
    NSString * _identifer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)transformForGeometry:(id)arg1;

@end
