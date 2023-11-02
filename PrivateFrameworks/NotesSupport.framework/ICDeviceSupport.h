
@interface ICDeviceSupport : NSObject

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

+ (bool)deviceIsIPad;
+ (bool)deviceIsMac;
+ (bool)deviceIsSimulator;
+ (id)deviceName;
+ (bool)deviceSupportsFirstGenPencil;
+ (bool)deviceSupportsPencil;
+ (bool)deviceSupportsSystemPaper;
+ (id)evaluatedBiometricsContextWithError:(id*)arg1;
+ (bool)hasPasscode;
+ (bool)isBiometricsAvailable;
+ (bool)isBiometricsEnrolled;
+ (bool)isFaceIDAvailable;
+ (bool)isFaceIDEnrolled;
+ (bool)isOpticIDAvailable;
+ (bool)isOpticIDEnrolled;
+ (bool)isRunningDuoTests;
+ (bool)isRunningInApp;
+ (bool)isRunningUnitTests;
+ (bool)isTouchIDAvailable;
+ (bool)isTouchIDEnrolled;
+ (bool)isTouchIDLockedOut;
+ (struct CGSize { double x1; double x2; })notesDeviceDrawingSize;
+ (id)notesProductType;
+ (id)productBuildVersion;
+ (id)productName;
+ (id)productVersion;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (bool)isCameraAvailable;
+ (bool)isLargerCompactHorizontalWidthDevice;

@end
