
@interface NTKEditOption : NSObject <NSSecureCoding> {
    CLKDevice * _device;
}

@property (nonatomic, readonly) NSString *dailySnapshotKey;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *localizedNameForAction;
@property (nonatomic, readonly) long long swatchStyle;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)optionsDescription;
+ (struct CGSize { double x1; double x2; })sizeForSwatchStyle:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)JSONObjectRepresentationForFace:(id)arg1;
- (id)dailySnapshotKey;
- (id)description;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2;
- (bool)isPrideOption;
- (bool)isValidOption;
- (id)localizedName;
- (id)localizedNameForAction;
- (bool)optionExistsInDevice:(id)arg1;
- (long long)swatchStyle;
- (id)uniqueName;

@end
