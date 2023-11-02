
@interface ACCNavigationAccessoryObjectDetectionComponent : NSObject {
    unsigned long long  _identifier;
    bool  _isEnabled;
    NSString * _name;
    NSArray * _supportedTypes;
}

@property unsigned long long identifier;
@property bool isEnabled;
@property (retain) NSString *name;
@property (retain) NSArray *supportedTypes;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setSupportedTypes:(id)arg1;
- (id)supportedTypes;

@end
