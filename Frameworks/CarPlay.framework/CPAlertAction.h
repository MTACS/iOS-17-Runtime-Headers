
@interface CPAlertAction : NSObject <NSSecureCoding> {
    UIColor * _color;
    id /* block */  _handler;
    NSUUID * _identifier;
    unsigned long long  _style;
    NSString * _title;
}

@property (nonatomic, readonly, copy) UIColor *color;
@property (nonatomic, readonly, copy) id /* block */ handler;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, readonly, copy) NSString *title;

// Image: /System/Library/Frameworks/CarPlay.framework/CarPlay

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)color;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)handler;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 color:(id)arg2 handler:(id /* block */)arg3;
- (id)initWithTitle:(id)arg1 style:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (void)setIdentifier:(id)arg1;
- (unsigned long long)style;
- (id)title;

// Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport

- (id)alertActionRepresentationWithHandler:(id /* block */)arg1;

@end
