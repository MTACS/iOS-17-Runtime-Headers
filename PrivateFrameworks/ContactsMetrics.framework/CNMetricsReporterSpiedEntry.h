
@interface CNMetricsReporterSpiedEntry : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _dictionary;
    NSString * _event;
    bool  _logged;
}

@property (readonly, copy) NSMutableDictionary *dictionary;
@property (readonly, copy) NSString *event;
@property (getter=isLogged, readonly) bool logged;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)event;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 event:(id)arg2 logged:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isLogged;

@end
