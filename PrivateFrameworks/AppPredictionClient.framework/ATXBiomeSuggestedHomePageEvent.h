
@interface ATXBiomeSuggestedHomePageEvent : NSObject <BMStoreData, NSSecureCoding> {
    long long  _action;
    NSString * _identifier;
    long long  _pageType;
}

@property (nonatomic) long long action;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long pageType;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (unsigned int)dataVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithPageType:(long long)arg1 identifier:(id)arg2 action:(long long)arg3;
- (long long)pageType;
- (id)serialize;
- (void)setAction:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPageType:(long long)arg1;

@end
