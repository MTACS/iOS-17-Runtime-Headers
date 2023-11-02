
@interface Coherence.CRSQLStore : Coherence._CRSQLStore {
    void allAssetsQueryStatement;
    void allDataQueryStatement;
    void allQueryStatement;
    void allVersionsQueryStatement;
    void assetDeleteQueryStatement;
    void assetGetRetainQueryStatement;
    void assetInsertQueryStatement;
    void assetQueryStatement;
    void assetRetainQueryStatement;
    void childRetainCountQueryStatement;
    void dataInsertStatement;
    void dataQueryStatement;
    void encryptionDelegate;
    void hasAssetQueryStatement;
    void hasReferenceQueryStatement;
    void referenceDeleteStatement;
    void retainCountQueryStatement;
    void updateChildRetainCountQueryStatement;
    void updateRetainCountQueryStatement;
    void updateVersionQueryStatement;
    void vacuumStatement;
    void versionQueryStatement;
}

@end
