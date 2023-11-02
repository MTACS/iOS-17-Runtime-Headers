
@interface ICButtonItemIdentifier : NSObject <ICItemIdentifier> {
    <ICItemIdentifier> * _parentIdentifier;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayText;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <ICItemIdentifier> *parentIdentifier;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *systemImageName;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayText;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 parentIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)parentIdentifier;
- (long long)style;
- (id)systemImageName;
- (long long)type;

@end
