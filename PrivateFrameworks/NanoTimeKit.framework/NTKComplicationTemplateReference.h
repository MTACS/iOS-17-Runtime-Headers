
@interface NTKComplicationTemplateReference : NSObject <NSCopying, NSSecureCoding> {
    CLKComplicationTemplate * _cachedTemplate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _path;
}

@property (nonatomic, readonly) CLKComplicationTemplate *complicationTemplate;
@property (nonatomic, readonly) NSString *path;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_lock_complicationTemplate;
- (id)complicationTemplate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1 existingTemplate:(id)arg2;
- (id)path;

@end
